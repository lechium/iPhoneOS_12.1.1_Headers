/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {

	NSMutableDictionary* _iconURLStringToInfoDictionary;
	NSMutableDictionary* _iconUUIDToURLStringDictionary;

}
-(id)iconInfoForURLString:(id)arg1 ;
-(void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 ;
-(id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(CGSize*)arg3 ;
-(void)removeAllRecords;
-(void)removeRecordForIconUUIDs:(id)arg1 ;
-(id)init;
@end
