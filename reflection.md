
## Effect of each of the P, I, D componen in the implemenation
- P: proportional to the cross track error. This value will largely directly contribute to steer the car back on the track to reduce the error.
- D: the differential part helps to slowly counter the sharp change of the proportional part to smoothly steer the car back on track.
- I: the integral parts help to compensate for all the cross track error overtime and eventually to help car move on the trajectory we desired.




## How Parameters Tuning was done

I first started to tune the Kp value first and arrive at 0.5 as the car is able to move forward with less drastic turn from side to center whenever it goes off the planned trajectory. However, it is not able to go very far as it easily goes off track. Then, I continue to tune the Kd value however looks like any value that larger 0.1 will make the steering worse so I set the value to 0.01 and move on to tune the I value with hope to offset all accumulative error from P and D. I set the value of Ki higher than P and D started at 2 up to 4. Surprisingly, this helps the car to be able to steer better and able to complete one lap of the demo route. 
