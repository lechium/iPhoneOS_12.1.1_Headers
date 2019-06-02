/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFileManager, CNURLSessionFactory;

@interface CNData : NSObject {

	CNFileManager* _fileManager;
	CNURLSessionFactory* _sessionFactory;

}

@property (nonatomic,readonly) CNFileManager * fileManager;                       //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) CNURLSessionFactory * sessionFactory;              //@synthesize sessionFactory=_sessionFactory - In the implementation block
+(id)dataWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2 ;
+(id)observableWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2 ;
+(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 fileManager:(id)arg4 ;
+(unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned long long)arg1 ;
+(id)observableWithContentsOfURL:(id)arg1 ;
+(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
-(id)initWithFileManager:(id)arg1 urlSessionFactory:(id)arg2 ;
-(CNURLSessionFactory *)sessionFactory;
-(id)observableWithContentsOfURL:(id)arg1 ;
-(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 ;
-(CNFileManager *)fileManager;
-(id)initWithFileManager:(id)arg1 ;
-(id)init;
-(id)dataWithContentsOfURL:(id)arg1 ;
@end

