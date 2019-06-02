/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSSnapshot.h>

@class NSData;

@interface NWSRouteSnapshot : NWSSnapshot {

	NSData* _destination;
	NSData* _mask;
	NSData* _gateway;
	nstat_route_descriptor _descriptor;

}

@property (readonly) unsigned long long routeID; 
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long gatewayID; 
@property (readonly) NSData * destination; 
@property (readonly) NSData * mask; 
@property (readonly) NSData * gateway; 
@property (readonly) unsigned interfaceIndex; 
@property (readonly) unsigned flags; 
@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
-(unsigned)interfaceIndex;
-(id)traditionalDictionary;
-(void)_initWithDescriptor:(nstat_route_descriptor*)arg1 ;
-(unsigned long long)gatewayID;
-(id)initWithCounts:(const nstat_counts*)arg1 routeDescriptor:(nstat_route_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 ;
-(unsigned long long)routeID;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)flags;
-(NSData *)gateway;
-(unsigned long long)parentID;
-(unsigned)rxDuplicateBytes;
-(unsigned)txRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(unsigned)connectSuccesses;
-(unsigned)connectAttempts;
-(id)description;
-(NSData *)mask;
-(NSData *)destination;
@end

