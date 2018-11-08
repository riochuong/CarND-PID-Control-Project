
## Effect of each of the P, I, D componen in the implemenation
- P: I keep this value at 0.5 to help the car to drive smooth on straight area. Also, the car will also do a less drastic turn from side to center whenever it goes off the planned trajectory.
- I: I keep this value high at 4 as it help to compensate for the commulative error overtime. This value helps to adjust the steering wheel by small portion at each step so the cross-track-error will be small enough to help keep the ca in front and stable.  
- D: I keep this value small per trial and errors. If I set this value higher like 0.05 the steering value is fluctuating with large range causing car fails to complete the route.

