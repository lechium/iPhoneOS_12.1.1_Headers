/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UISearchBar.h>

@class NSString, UILabel;

@interface _SearchEntryWithMatchDisplay : UISearchBar {

	NSString* _matchDisplayString;
	UILabel* _matchDisplayLabel;

}

@property (readonly) UILabel * matchDisplayLabel;                        //@synthesize matchDisplayLabel=_matchDisplayLabel - In the implementation block
@property (nonatomic,retain) NSString * matchDisplayString;              //@synthesize matchDisplayString=_matchDisplayString - In the implementation block
-(void)setMatchDisplayString:(NSString *)arg1 ;
-(void)matchDisplayVisible:(BOOL)arg1 ;
-(id)_createMatchDisplayLabel;
-(NSString *)matchDisplayString;
-(UILabel *)matchDisplayLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
