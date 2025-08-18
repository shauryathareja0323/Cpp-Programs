import math
import matplotlib.pyplot as plt

# Fixed lengths (in mm or cm, same unit)
l1 = 200  # thigh length
l2 = 200  # shin length

while True:
    try:
        a = float(input("Enter foot distance from hip (a), or -1 to exit: "))
        if a < 0:
            break
        if a > (l1 + l2) or a < abs(l1 - l2):
            print("❌ Distance not reachable with given link lengths!")
            continue

        # Calculate angles using law of cosines
        a1 = math.acos(((l1**2) + (a**2) - (l2**2)) / (2 * l1 * a))  # hip angle from horizontal
        a2 = math.acos(((l1**2) + (l2**2) - (a**2)) / (2 * l1 * l2))  # knee interior angle

        # Coordinates
        hip = (0, 0)
        knee = (l1 * math.cos(a1), l1 * math.sin(a1))
        foot = (a, 0)  # foot is directly horizontal from hip

        # Adjust foot position for calculated geometry
        # The above assumes a straight-line horizontal placement, so recompute foot coordinates
        foot = (
            knee[0] + l2 * math.cos(a1 - (math.pi - a2)),
            knee[1] + l2 * math.sin(a1 - (math.pi - a2))
        )

        # Plot
        plt.figure(figsize=(6, 6))
        plt.plot([hip[0], knee[0]], [hip[1], knee[1]], 'bo-', linewidth=4, markersize=10, label="Thigh")
        plt.plot([knee[0], foot[0]], [knee[1], foot[1]], 'ro-', linewidth=4, markersize=10, label="Shin")
        plt.plot(foot[0], foot[1], 'go', markersize=10, label="Foot")
        plt.xlim(-l1-l2, l1+l2)
        plt.ylim(-l1-l2, l1+l2)
        plt.gca().set_aspect('equal', adjustable='box')
        plt.title(f"Hip angle: {math.degrees(a1):.1f}°, Knee angle: {math.degrees(a2):.1f}°")
        plt.legend()
        plt.grid(True)
        plt.show()

    except ValueError:
        print("❌ Please enter a valid number.")
