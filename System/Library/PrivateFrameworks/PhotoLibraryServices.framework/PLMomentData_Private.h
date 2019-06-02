/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMomentData_Private <PLMomentData>
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (assign,nonatomic) double approximateLatitude; 
@property (assign,nonatomic) double approximateLongitude; 
@optional
-(int)cachedPhotosCount;
-(int)cachedVideosCount;
-(void)setCachedPhotosCount:(int)arg1;
-(void)setCachedVideosCount:(int)arg1;
-(double)approximateLongitude;
-(double)approximateLatitude;
-(void)setApproximateLatitude:(double)arg1;
-(void)setApproximateLongitude:(double)arg1;

@end
