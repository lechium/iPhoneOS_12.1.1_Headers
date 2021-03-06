/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFStringGenerator;
@class HFServiceNameComponents, UIColor, UIVisualEffect;

@interface HUGridServiceCellTextConfiguration : NSObject {

	HFServiceNameComponents* _nameComponents;
	id<HFStringGenerator> _descriptionText;
	UIColor* _nameTextColor;
	UIColor* _descriptionTextColor;
	UIVisualEffect* _descriptionTextEffect;

}

@property (nonatomic,retain) HFServiceNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * nameTextColor;                               //@synthesize nameTextColor=_nameTextColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                        //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * descriptionTextEffect;                //@synthesize descriptionTextEffect=_descriptionTextEffect - In the implementation block
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(HFServiceNameComponents *)nameComponents;
-(UIColor *)nameTextColor;
-(void)setNameTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIVisualEffect *)descriptionTextEffect;
-(void)setDescriptionTextEffect:(UIVisualEffect *)arg1 ;
-(void)setNameComponents:(HFServiceNameComponents *)arg1 ;
@end

