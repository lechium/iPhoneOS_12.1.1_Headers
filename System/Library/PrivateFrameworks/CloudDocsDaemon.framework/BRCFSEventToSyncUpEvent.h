/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

@interface BRCFSEventToSyncUpEvent : BRCEventMetric {

	BOOL _isPackage;
	unsigned _genID;
	unsigned long long _fileID;
	BRCItemID* _itemID;
	unsigned long long _mtime;
	unsigned long long _contentSize;
	unsigned long long _syncUpBatchSize;

}

@property (assign,nonatomic) unsigned long long fileID;                       //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) unsigned genID;                                  //@synthesize genID=_genID - In the implementation block
@property (nonatomic,retain) BRCItemID * itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                                  //@synthesize isPackage=_isPackage - In the implementation block
@property (assign,nonatomic) unsigned long long syncUpBatchSize;              //@synthesize syncUpBatchSize=_syncUpBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long contentSize;                  //@synthesize contentSize=_contentSize - In the implementation block
-(BOOL)isPackage;
-(void)setItemID:(BRCItemID *)arg1 ;
-(BRCItemID *)itemID;
-(void)setFileID:(unsigned long long)arg1 ;
-(unsigned long long)fileID;
-(unsigned long long)mtime;
-(unsigned)genID;
-(void)setGenID:(unsigned)arg1 ;
-(id)subDescription;
-(id)additionalPayload;
-(void)setMtime:(unsigned long long)arg1 ;
-(void)setIsPackage:(BOOL)arg1 ;
-(unsigned long long)syncUpBatchSize;
-(void)setSyncUpBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)contentSize;
-(void)setContentSize:(unsigned long long)arg1 ;
@end

