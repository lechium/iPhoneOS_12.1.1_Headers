/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCContainerScheduler, CKServerChangeToken, NSString;

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCContainerScheduler* _scheduler;
	CKServerChangeToken* _metadataChangeToken;
	CKServerChangeToken* _zoneHealthChangeToken;

}

@property (nonatomic,readonly) BRCContainerScheduler * scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * metadataChangeToken;                //@synthesize metadataChangeToken=_metadataChangeToken - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * zoneHealthChangeToken;              //@synthesize zoneHealthChangeToken=_zoneHealthChangeToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 zoneHealthChangeToken:(id)arg3 ;
-(BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2 ;
-(CKServerChangeToken *)metadataChangeToken;
-(CKServerChangeToken *)zoneHealthChangeToken;
-(BRCContainerScheduler *)scheduler;
-(void)main;
@end

