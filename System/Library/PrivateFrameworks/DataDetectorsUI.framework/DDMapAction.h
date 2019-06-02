/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class NSURL, NSString;

@interface DDMapAction : DDRemoteAction {

	NSURL* _commitURL;
	NSString* _addressString;

}
+(BOOL)actionAvailableForContact:(id)arg1 ;
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)viewControllerProviderClass;
-(id)commitURL;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)platterTitle;
-(id)previewActions;
@end

