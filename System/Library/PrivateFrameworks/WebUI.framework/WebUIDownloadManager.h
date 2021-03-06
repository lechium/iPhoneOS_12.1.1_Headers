/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebDownloadDelegate.h>

@class NSURLDownload, NSString;

@interface WebUIDownloadManager : NSObject <WebDownloadDelegate> {

	id _delegate;
	NSURLDownload* _download;
	NSString* _downloadPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadDidBegin:(id)arg1 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_cleanUp;
-(void)_downloadDidFail:(id)arg1 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
@end

