/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_group, OS_dispatch_source;
@class BRCServerZone, NSMutableDictionary, NSMutableArray, NSObject, NSError, NSDictionary, NSString;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	NSMutableDictionary* _recordsByID;
	NSMutableArray* _recordsWithXattrsToFetch;
	NSObject*<OS_dispatch_group> _recordsBeingFetchedGroup;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSObject*<OS_dispatch_source> _xattrFetchingSource;
	NSError* _error;
	BOOL _isDoneFetchingRecords;

}

@property (nonatomic,readonly) NSDictionary * recordsByID;              //@synthesize recordsByID=_recordsByID - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllRecords;
-(NSDictionary *)recordsByID;
-(void)stopWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 ;
-(void)startWithParentOperation:(BRCOperation*)arg1 ;
-(void)removeRecordByID:(id)arg1 ;
-(void)waitUntilRecordsAreFetched;
-(void)_scheduleXattrFetch;
-(void)stop;
-(void)cancel;
-(void)main;
-(void)addRecord:(id)arg1 ;
-(NSError *)error;
@end

