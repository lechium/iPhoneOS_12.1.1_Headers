/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {

	ICURLSession* _session;
	ICURLRequest* _request;

}
-(id)_podcastsAppBundleID;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
@end

