/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIArchiveItem : NSObject {

	BOOL _fileSizeIsSet;
	BOOL _isAppleDoubleFile;
	NSString* _pathInArchive;
	NSString* _fileType;
	unsigned long long _fileSize;
	NSString* _pathToAppleDoubleRealFileCounterpart;

}

@property (nonatomic,retain) NSString * pathInArchive;                                     //@synthesize pathInArchive=_pathInArchive - In the implementation block
@property (nonatomic,retain) NSString * fileType;                                          //@synthesize fileType=_fileType - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL fileSizeIsSet;                                           //@synthesize fileSizeIsSet=_fileSizeIsSet - In the implementation block
@property (assign,nonatomic) BOOL isAppleDoubleFile;                                       //@synthesize isAppleDoubleFile=_isAppleDoubleFile - In the implementation block
@property (nonatomic,retain) NSString * pathToAppleDoubleRealFileCounterpart;              //@synthesize pathToAppleDoubleRealFileCounterpart=_pathToAppleDoubleRealFileCounterpart - In the implementation block
-(id)description;
-(NSString *)pathInArchive;
-(NSString *)fileType;
-(NSString *)pathToAppleDoubleRealFileCounterpart;
-(void)setFileSizeIsSet:(BOOL)arg1 ;
-(BOOL)fileSizeIsSet;
-(void)setPathInArchive:(NSString *)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(BOOL)isAppleDoubleFile;
-(void)setPathToAppleDoubleRealFileCounterpart:(NSString *)arg1 ;
-(void)setIsAppleDoubleFile:(BOOL)arg1 ;
-(unsigned long long)fileSize;
@end

