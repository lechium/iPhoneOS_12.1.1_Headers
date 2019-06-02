/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OSLogPersistenceDelegate.h>
#import <libobjc.A.dylib/OSActivityStreamDelegate.h>

@class NSDate, NSString, OSLogPersistence, OSActivityStream, NSMutableArray;

@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate> {

	BOOL _colorOutput;
	double _startTimeOffset;
	NSDate* _absoluteStartDate;
	NSString* _processName;
	unsigned long long _source;
	OSLogPersistence* _archiveSource;
	OSActivityStream* _streamSource;
	NSMutableArray* _streamObservers;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) OSLogPersistence * archiveSource;              //@synthesize archiveSource=_archiveSource - In the implementation block
@property (nonatomic,retain) OSActivityStream * streamSource;               //@synthesize streamSource=_streamSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * streamObservers;              //@synthesize streamObservers=_streamObservers - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double startTimeOffset;                        //@synthesize startTimeOffset=_startTimeOffset - In the implementation block
@property (nonatomic,retain) NSDate * absoluteStartDate;                    //@synthesize absoluteStartDate=_absoluteStartDate - In the implementation block
@property (nonatomic,retain) NSString * processName;                        //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL colorOutput;                              //@synthesize colorOutput=_colorOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 ;
-(void)streamDidFail:(id)arg1 error:(id)arg2 ;
-(BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)colorOutput;
-(void)setColorOutput:(BOOL)arg1 ;
-(void)_configureStreamSource:(id)arg1 ;
-(NSMutableArray *)streamObservers;
-(NSDate *)absoluteStartDate;
-(double)startTimeOffset;
-(OSLogPersistence *)archiveSource;
-(OSActivityStream *)streamSource;
-(id)initForHost;
-(id)initForSimulator;
-(id)initWithRemoteDevice:(id)arg1 ;
-(id)initWithArchiveAtURL:(id)arg1 ;
-(void)addStreamObserver:(id)arg1 ;
-(void)streamLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)setStartTimeOffset:(double)arg1 ;
-(void)setAbsoluteStartDate:(NSDate *)arg1 ;
-(void)setArchiveSource:(OSLogPersistence *)arg1 ;
-(void)setStreamSource:(OSActivityStream *)arg1 ;
-(void)setStreamObservers:(NSMutableArray *)arg1 ;
-(void)streamDidStop:(id)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)_init;
-(NSString *)processName;
@end

