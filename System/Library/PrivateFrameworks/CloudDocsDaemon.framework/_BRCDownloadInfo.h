/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableDictionary;

@interface _BRCDownloadInfo : _BRCTransferInfo {

	long long previousCompletedUnitCount;
	long long previousTotalUnitCount;
	NSMutableDictionary* _resumeUnitCounts;

}

@property (assign,nonatomic) long long previousCompletedUnitCount; 
@property (assign,nonatomic) long long previousTotalUnitCount; 
@property (nonatomic,readonly) NSMutableDictionary * resumeUnitCounts;              //@synthesize resumeUnitCounts=_resumeUnitCounts - In the implementation block
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(long long)previousCompletedUnitCount;
-(void)setPreviousCompletedUnitCount:(long long)arg1 ;
-(long long)previousTotalUnitCount;
-(void)setPreviousTotalUnitCount:(long long)arg1 ;
-(NSMutableDictionary *)resumeUnitCounts;
-(id)init;
@end

