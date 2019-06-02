/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class STUser, UILabel;

@interface STNoUsageDataView : UIView {

	STUser* _user;
	UILabel* _noDataDetailTextLabel;

}

@property (nonatomic,readonly) UILabel * noDataDetailTextLabel;              //@synthesize noDataDetailTextLabel=_noDataDetailTextLabel - In the implementation block
@property (nonatomic,retain) STUser * user;                                  //@synthesize user=_user - In the implementation block
-(STUser *)user;
-(void)setUser:(STUser *)arg1 ;
-(UILabel *)noDataDetailTextLabel;
-(id)initWithPreferredFontTextStyle:(id)arg1 ;
@end

