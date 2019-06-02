/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class CMArchiveManager, NSMutableArray, NSString;

@interface CSVMapper : CMMapper {

	CMArchiveManager* mArchiver;
	NSMutableArray* mRows;
	NSString* mFileName;
	unsigned long long mColumnCount;
	CGSize mPageSize;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4 ;
-(CGSize)pageSize;
@end

