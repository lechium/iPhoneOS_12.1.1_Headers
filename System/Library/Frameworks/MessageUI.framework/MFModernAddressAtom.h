/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MFModernAtomViewResembling.h>

@protocol MFModernAddressAtomDelegate;
@class UIFont, MFModernAtomView, NSString;

@interface MFModernAddressAtom : UIControl <MFModernAtomViewResembling> {

	id<MFModernAddressAtomDelegate> _delegate;
	MFModernAtomView* _atomView;
	void* _person;
	NSString* _fullAddress;
	NSString* _displayString;
	unsigned _maxWidth;
	int _identifier;
	unsigned _addressIsPhoneNumber : 1;
	unsigned _updatedABPerson : 1;
	unsigned _isDisplayStringFromAddressBook : 1;
	void* _addressBook;
	NSString* _addressIdentifier;
	double _firstLineIndent;

}

@property (nonatomic,readonly) NSString * addressIdentifier; 
@property (assign,nonatomic) double firstLineIndent;                              //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (nonatomic,readonly) long long numberOfLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
+(id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2 useAbbreviatedName:(BOOL)arg3 ;
-(void)setAddress:(id)arg1 ;
-(NSString *)addressIdentifier;
-(void*)ABPerson;
-(id)emailAddress;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(void)_updateDisplayStringIncludingABPerson:(BOOL)arg1 ;
-(void)_displayStringDidChange;
-(id)presentationOptionsDescription;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(void)_updateABPerson;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(id)unmodifiedAddressString;
-(id)initWithAddress:(id)arg1 presentationOptions:(unsigned long long)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(double)arg4 addressBook:(void*)arg5 ;
-(void)addressBookDidChange:(id)arg1 ;
-(void)setAtomFont:(id)arg1 ;
-(BOOL)isDisplayStringFromAddressBook;
-(int)ABPropertyType;
-(unsigned long long)presentationOptions;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(double)firstLineIndent;
-(void)setFirstLineIndent:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)identifier;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(void)setDelegate:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)numberOfLines;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CGRect)_highlightBounds;
-(id)viewForLastBaselineLayout;
-(id)displayString;
-(void)setMaxWidth:(unsigned)arg1 ;
-(CGPoint)baselinePoint;
@end

