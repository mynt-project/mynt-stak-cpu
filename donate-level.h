#pragma once

/*
 * Dev donation.
 * Percentage of your hashing power that you want to donate to the developer, it can be 0.0 if you don't want to do that.
 * Example of how it works for the default setting of 0.15:
 * Your miner will mine into your usual pool for 85 minutes, then switch to the developer's pool for 15 minutes.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 * Adjust the levels below before compiling the stak.
 */

constexpr double fDevDonationLevel = 0.15; /* multiply * 100 */
