/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {

	id _textBalloonView;

}

@property (assign,nonatomic,__weak) id<SiriUIMessageContentTemplateModel> dataSource; 
-(double)desiredHeight;
-(id)initWithDataSource:(id)arg1 ;
-(CGSize)_textBalloonViewBoundingSize;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setSemanticContentAttribute:(long long)arg1 ;
@end

