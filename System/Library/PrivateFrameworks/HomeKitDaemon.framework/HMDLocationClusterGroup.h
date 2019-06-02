/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject {

	CLLocation* _center;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) CLLocation * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)groupWithCenter:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)setCenter:(CLLocation *)arg1 ;
-(CLLocation *)center;
-(void)setLocations:(NSMutableArray *)arg1 ;
@end
