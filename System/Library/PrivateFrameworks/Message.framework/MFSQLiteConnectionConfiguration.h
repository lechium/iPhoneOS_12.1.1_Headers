/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MFSQLiteConnectionConfiguration : NSObject <NSCopying> {

	NSString* _basePath;
	NSString* _databaseName;

}

@property (nonatomic,copy) NSString * basePath;                                 //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,copy) NSString * databaseName;                             //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) const char* databaseFileSystemPath; 
-(NSString *)databasePath;
-(void)setBasePath:(NSString *)arg1 ;
-(void)setDatabaseName:(NSString *)arg1 ;
-(const char*)databaseFileSystemPath;
-(id)_databasePathWithDatabaseName:(id)arg1 ;
-(NSString *)databaseName;
-(NSString *)basePath;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

