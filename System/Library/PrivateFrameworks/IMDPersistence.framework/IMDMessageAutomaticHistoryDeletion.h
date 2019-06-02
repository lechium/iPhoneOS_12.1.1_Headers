/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDMessageAutomaticHistoryDeletion : NSObject
+(id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(BOOL)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(void)deleteDirectoryAtPath:(id)arg1 ;
+(id)_getFilePathNotDSStore:(id)arg1 ;
+(BOOL)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(id)_getiChatFileMetadataForPath:(id)arg1 ;
+(BOOL)isOlderThanDays:(long long)arg1 fromDate:(id)arg2 ;
+(id)_getPathAttributesForPath:(id)arg1 ;
+(void)cleanUpOrphanAttachments;
+(void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1 ;
+(void)cleanDatabase;
+(void)deleteSpolightArchivedFilesAfterDays:(long long)arg1 ;
@end

