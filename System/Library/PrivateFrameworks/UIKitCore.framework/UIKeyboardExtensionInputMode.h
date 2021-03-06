/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)containingBundle;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isDefaultRightToLeft;
-(BOOL)isExtensionInputMode;
-(id)hardwareLayout;
-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isStalledExtensionInputMode;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(void)setPrimaryLanguage:(id)arg1 ;
-(id)displayName;
-(id)extendedDisplayName;
-(id)identifierWithLayouts;
-(id)normalizedIdentifierLevels;
-(id)containingBundleDisplayName;
-(BOOL)isDesiredForTraits:(id)arg1 ;
@end

