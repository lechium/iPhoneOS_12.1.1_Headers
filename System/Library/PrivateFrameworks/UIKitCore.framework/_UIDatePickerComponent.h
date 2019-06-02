/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned long long _equivalentUnit;
	NSString* _formatString;
	unsigned long long _calendarUnit;
	double _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;                        //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                                //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) double width;                                     //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
-(id)description;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(unsigned long long)equivalentUnit;
-(NSString *)formatString;
-(unsigned long long)calendarUnit;
-(NSRange)unitRange;
-(void)setUnitRange:(NSRange)arg1 ;
@end

