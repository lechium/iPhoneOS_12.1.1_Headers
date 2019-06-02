/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMapTable, NSString;

@interface SiriUIURLSession : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _URLSession;
	NSMapTable* _tasksForClient;
	NSMapTable* _imageDownloadForTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedURLSession;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 fillColor:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 fillColor:(id)arg4 userAgent:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 incremental:(BOOL)arg4 progressHandler:(/*^block*/id)arg5 fillColor:(id)arg6 userAgent:(id)arg7 ;
-(void)_registerTask:(id)arg1 forClient:(id)arg2 ;
-(void)_unregisterTask:(id)arg1 forClient:(id)arg2 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 incremental:(BOOL)arg4 progressHandler:(/*^block*/id)arg5 fillColor:(id)arg6 ;
-(void)cancelAllTasksForClient:(id)arg1 ;
-(id)init;
-(NSString *)description;
@end
