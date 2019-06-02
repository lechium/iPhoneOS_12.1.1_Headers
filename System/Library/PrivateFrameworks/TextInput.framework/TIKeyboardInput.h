/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSString, TIKeyboardTouchEvent, TIKeyboardCandidate;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {

	SCD_Union_TI5 _flags;
	BOOL _backspace;
	NSString* _string;
	id<NSCopying><NSObject><NSSecureCoding> _object;
	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardCandidate* _acceptedCandidate;
	NSString* _inputManagerHint;

}

@property (nonatomic,copy) NSString * string;                                                                            //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject><NSSecureCoding> object;                                               //@synthesize object=_object - In the implementation block
@property (assign,getter=isBackspace,nonatomic) BOOL backspace;                                                          //@synthesize backspace=_backspace - In the implementation block
@property (assign,getter=isUppercase,nonatomic) BOOL uppercase; 
@property (assign,getter=isAutoshifted,nonatomic) BOOL autoshifted; 
@property (assign,getter=isPopupVariant,nonatomic) BOOL popupVariant; 
@property (assign,getter=isMultitap,nonatomic) BOOL multitap; 
@property (assign,getter=isFlick,nonatomic) BOOL flick; 
@property (assign,getter=isGesture,nonatomic) BOOL gesture; 
@property (assign,getter=isSynthesizedByAcceptingCandidate,nonatomic) BOOL synthesizedByAcceptingCandidate; 
@property (assign,getter=isDoubleSpace,nonatomic) BOOL doubleSpace; 
@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;                                                          //@synthesize touchEvent=_touchEvent - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                                                    //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * inputManagerHint;                                                                  //@synthesize inputManagerHint=_inputManagerHint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDoubleSpace:(BOOL)arg1 ;
-(NSString *)inputManagerHint;
-(BOOL)isMultitap;
-(BOOL)isGesture;
-(BOOL)isBackspace;
-(BOOL)isDoubleSpace;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)description;
-(id<NSCopying><NSObject><NSSecureCoding>)object;
-(void)setString:(NSString *)arg1 ;
-(void)setObject:(id<NSCopying><NSObject><NSSecureCoding>)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(TIKeyboardTouchEvent *)touchEvent;
-(BOOL)isPopupVariant;
-(BOOL)isFlick;
-(void)setAutoshifted:(BOOL)arg1 ;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)isAutoshifted;
-(BOOL)isUppercase;
-(void)setPopupVariant:(BOOL)arg1 ;
-(void)setMultitap:(BOOL)arg1 ;
-(void)setFlick:(BOOL)arg1 ;
-(void)setGesture:(BOOL)arg1 ;
-(void)setInputManagerHint:(NSString *)arg1 ;
-(BOOL)isSynthesizedByAcceptingCandidate;
-(void)setBackspace:(BOOL)arg1 ;
-(void)setSynthesizedByAcceptingCandidate:(BOOL)arg1 ;
@end

