/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFFileCacheStore.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore> {

	NSMutableDictionary* _fileWrappers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2 ;
-(void)fileCache:(id)arg1 storeFileWrapper:(id)arg2 ;
-(void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2 ;
-(void)removeAllFileWrappersForFileCache:(id)arg1 ;
-(NSString *)description;
@end

