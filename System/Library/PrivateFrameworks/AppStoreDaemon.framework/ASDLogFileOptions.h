/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	unsigned long long _maxSizeInBytes;
	long long _maxNumberOfLogFiles;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogFileSize;              //@synthesize maxSizeInBytes=_maxSizeInBytes - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLogFiles;                  //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(unsigned long long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long long)arg1 ;
-(long long)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

