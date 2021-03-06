/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIMetricsController : NSObject
-(void)_submitLibraryPageEventWithDate:(id)arg1 ;
-(void)_submitLibraryMediaPlayEventForMediaItem:(id)arg1 withDate:(id)arg2 ;
-(id)_getClientIDFromCookies:(id)arg1 ;
-(id)_createMetricsController;
-(id)_getClientIDForAccount:(id)arg1 ;
-(void)_populateBaseFieldsAndSendEvent:(id)arg1 thatOccuredAt:(id)arg2 ;
-(id)_getMediaEntityTypeStringForMediaItem:(id)arg1 setPageType:(id*)arg2 ;
-(void)submitLibraryPageEvent;
-(void)submitLibraryMediaPlayEventForMediaItem:(id)arg1 ;
-(BOOL)_isAllowedToSubmit;
-(id)_getMediaLibraryTypeStringForMediaItem:(id)arg1 ;
@end

