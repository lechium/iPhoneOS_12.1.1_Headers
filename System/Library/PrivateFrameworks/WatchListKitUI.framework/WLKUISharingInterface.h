/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKUISharingInterface.h>

@protocol WLKUISharingInterface <JSExport>
@required
-(void)displaySharingForItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 :(id)arg6;
-(void)showSharingForItem:(id)arg1 :(id)arg2 :(id)arg3;
-(void)dismiss;

@end


@class WLKUISharingInterfaceActivityViewController;

@interface WLKUISharingInterface : IKJSObject <WLKUISharingInterface> {

	WLKUISharingInterfaceActivityViewController* _activityViewController;
	BOOL _isPresented;

}
-(id)_sourceViewForDomElement:(long long)arg1 ;
-(void)displaySharingForItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 :(id)arg6 ;
-(void)showSharingForItem:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)dismiss;
@end

