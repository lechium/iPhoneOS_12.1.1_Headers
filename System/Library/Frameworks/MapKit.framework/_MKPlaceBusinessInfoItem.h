/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIFont, UIColor;

@interface _MKPlaceBusinessInfoItem : NSObject {

	NSString* _displayString;
	BOOL _isAvailable;
	NSAttributedString* _formattedDisplayString;
	UIFont* _font;
	UIColor* _textColor;

}

@property (nonatomic,readonly) NSAttributedString * displayString; 
+(id)itemWithDescription:(id)arg1 availability:(BOOL)arg2 ;
-(void)setFont:(id)arg1 textColor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)displayString;
@end
