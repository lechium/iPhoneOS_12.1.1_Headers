/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSData;

@interface NWStatisticsRouteSource : NWStatisticsSource {

	nstat_route_descriptor _descriptor;
	NSData* _destination;

}

@property (retain) NSData * destination;              //@synthesize destination=_destination - In the implementation block
-(id)initWithManager:(id)arg1 destination:(const sockaddr*)arg2 mask:(const sockaddr*)arg3 interface:(unsigned)arg4 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_currentSnapshot;
-(id)description;
-(void)setDestination:(NSData *)arg1 ;
-(NSData *)destination;
@end

