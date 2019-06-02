/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface BLEduCloudContainer : NSObject {

	NSURL* _documentsURL;
	id _cloudToken;
	NSURL* _containerURL;
	NSObject*<OS_dispatch_queue> _containerQueue;

}

@property (nonatomic,retain) id cloudToken;                                            //@synthesize cloudToken=_cloudToken - In the implementation block
@property (nonatomic,readonly) NSURL * documentsURL;                                   //@synthesize documentsURL=_documentsURL - In the implementation block
@property (nonatomic,retain) NSURL * containerURL;                                     //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> containerQueue;              //@synthesize containerQueue=_containerQueue - In the implementation block
+(id)sharedEduCloudContainer;
-(BOOL)isSignedIn;
-(BOOL)addBookItem:(id)arg1 error:(id*)arg2 ;
-(id)allBookItems;
-(id)fileNameForPermlink:(id)arg1 ;
-(id)cloudToken;
-(id)cloudUrlForPermlink:(id)arg1 ;
-(BOOL)_writePlist:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_coordinatedReadOfPromisesWithError:(id*)arg1 ;
-(id)dictionaryAsBookItem:(id)arg1 path:(id)arg2 ;
-(id)performMetadataActionOnCloudURL:(id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)removeBookItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateBookItem:(id)arg1 error:(id*)arg2 ;
-(id)bookItemForURL:(id)arg1 ;
-(id)bookItemForPermlink:(id)arg1 ;
-(id)bookItemsForPermlinks:(id)arg1 ;
-(void)setCloudToken:(id)arg1 ;
-(void)setContainerURL:(NSURL *)arg1 ;
-(NSURL *)containerURL;
-(NSObject*<OS_dispatch_queue>)containerQueue;
-(void)setContainerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSURL *)documentsURL;
@end

