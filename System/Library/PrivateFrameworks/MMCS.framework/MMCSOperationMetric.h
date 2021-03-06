/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCSOperationMetric.h>
@class NSDate, NSMutableSet, NSArray;


@protocol MMCSOperationMetric <NSObject>
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (assign) double queueing; 
@property (assign) double executing; 
@property (assign) unsigned long long bytesUploaded; 
@property (assign) unsigned long long bytesDownloaded; 
@property (assign) unsigned long long connections; 
@property (assign) unsigned long long connectionsCreated; 
@property (readonly) NSMutableSet * requestUUIDs; 
@property (readonly) NSArray * rangesCopy; 
@required
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(NSMutableSet *)requestUUIDs;
-(void)setConnections:(unsigned long long)arg1;
-(void)setExecuting:(double)arg1;
-(void)addRange:(id)arg1;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(double)queueing;
-(void)setQueueing:(double)arg1;
-(double)executing;
-(NSArray *)rangesCopy;
-(double)duration;

@end


@class NSDate, NSMutableSet, NSArray, NSMutableArray, NSString;

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {

	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSMutableSet* _requestUUIDs;
	NSDate* _startDate;
	double _duration;
	NSMutableArray* _ranges;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (readonly) NSMutableSet * requestUUIDs;                      //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * rangesCopy; 
-(id)initWithDate:(id)arg1 ;
-(unsigned long long)connections;
-(void)rangesCompleted;
-(id)describeRanges;
-(long long)compareExecutingStartTime:(id)arg1 ;
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSMutableSet *)requestUUIDs;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)setExecuting:(double)arg1 ;
-(double)other;
-(void)addRange:(id)arg1 ;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(double)queueing;
-(void)setQueueing:(double)arg1 ;
-(double)executing;
-(NSArray *)rangesCopy;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ranges;
-(NSString *)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end

