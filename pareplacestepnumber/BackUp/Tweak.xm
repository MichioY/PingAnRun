%hook PARSHealthWalkingTrackInfo

- (unsigned long long)steps{
  return 10235;
}
%end

%hook PARSHealthCircleUploadPedometerRequest

- (unsigned long long)totalSteps{
  return 10352;
}
%end
