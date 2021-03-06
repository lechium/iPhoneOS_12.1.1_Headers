/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@interface DDPreviewAction : DDAction
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
-(id)createViewController;
-(void)dealloc;
-(id)viewController;
@end

