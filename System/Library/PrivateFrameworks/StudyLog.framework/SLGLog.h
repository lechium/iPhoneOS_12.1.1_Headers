/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLGLogClientProtocol;
@class NSNumber, NSString, NSDateFormatter;

@interface SLGLog : NSObject {

	id<SLGLogClientProtocol> _client;
	NSNumber* _pid;
	NSString* _processName;
	NSDateFormatter* _dateFormatter;
	BOOL _isEnabled;

}
+(id)sharedInstance;
-(id)initWithClient:(id)arg1 enabled:(BOOL)arg2 ;
-(void)_setClient:(id)arg1 ;
-(void)_fetchProcessInfo;
-(void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_serializeObjectAsLogEntry:(id)arg1 tags:(id)arg2 error:(id*)arg3 ;
-(void)log:(id)arg1 tags:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)_wrapObjectWithEntryMetadata:(id)arg1 tags:(id)arg2 ;
-(void)log:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 tags:(id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginSession;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)log:(id)arg1 ;
-(id)init;
-(BOOL)isEnabled;
-(void)reset;
-(void)endSession;
@end

