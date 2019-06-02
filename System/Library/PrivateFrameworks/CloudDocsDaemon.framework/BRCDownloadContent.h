/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCServerZone, NSIndexSet, BRCProgress;

@interface BRCDownloadContent : BRCDownload {

	unsigned long long _liveFileID;
	unsigned _liveDocumentID;
	BOOL _liveItemIsPackage;
	BRCServerZone* _zone;
	BOOL _isFinderBookmark;
	BOOL _requiresTwoPhase;
	NSIndexSet* _desiredIndices;

}

@property (nonatomic,readonly) BOOL liveItemIsPackage;                     //@synthesize liveItemIsPackage=_liveItemIsPackage - In the implementation block
@property (nonatomic,readonly) unsigned liveDocumentID;                    //@synthesize liveDocumentID=_liveDocumentID - In the implementation block
@property (nonatomic,readonly) unsigned long long liveFileID;              //@synthesize liveFileID=_liveFileID - In the implementation block
@property (nonatomic,readonly) NSIndexSet * desiredIndices;                //@synthesize desiredIndices=_desiredIndices - In the implementation block
@property (nonatomic,readonly) BOOL requiresTwoPhase;                      //@synthesize requiresTwoPhase=_requiresTwoPhase - In the implementation block
@property (nonatomic,retain) BRCProgress * progress; 
-(BOOL)requiresTwoPhase;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 ;
-(BOOL)_stageWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(BOOL)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id*)arg5 ;
-(BOOL)liveItemIsPackage;
-(unsigned)liveDocumentID;
-(NSIndexSet *)desiredIndices;
-(unsigned long long)liveFileID;
-(id)description;
-(void)setProgress:(BRCProgress *)arg1 ;
-(int)kind;
@end

