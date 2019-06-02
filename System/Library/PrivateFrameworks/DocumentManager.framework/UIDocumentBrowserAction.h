/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSArray, NSPredicate, FPUIAction;

@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsMultipleItems;
	BOOL _requiresResolvedItems;
	BOOL _requiresVersioning;
	NSString* _identifier;
	NSString* _localizedTitle;
	long long _availability;
	UIImage* _image;
	NSArray* _supportedContentTypes;
	/*^block*/id _resolvedHandler;
	/*^block*/id _unresolvedHandler;
	NSString* _uiActionProviderIdentifier;
	long long _style;
	long long _navigationSide;
	unsigned long long _menuSortOrder;
	NSPredicate* _filteringPredicate;
	FPUIAction* _uiAction;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) long long availability;                           //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) BOOL requiresResolvedItems;                       //@synthesize requiresResolvedItems=_requiresResolvedItems - In the implementation block
@property (nonatomic,copy) id resolvedHandler;                                 //@synthesize resolvedHandler=_resolvedHandler - In the implementation block
@property (nonatomic,copy) id unresolvedHandler;                               //@synthesize unresolvedHandler=_unresolvedHandler - In the implementation block
@property (nonatomic,copy) NSString * uiActionProviderIdentifier;              //@synthesize uiActionProviderIdentifier=_uiActionProviderIdentifier - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long navigationSide;                         //@synthesize navigationSide=_navigationSide - In the implementation block
@property (assign,nonatomic) BOOL requiresVersioning;                          //@synthesize requiresVersioning=_requiresVersioning - In the implementation block
@property (assign,nonatomic) unsigned long long menuSortOrder;                 //@synthesize menuSortOrder=_menuSortOrder - In the implementation block
@property (nonatomic,retain) NSPredicate * filteringPredicate;                 //@synthesize filteringPredicate=_filteringPredicate - In the implementation block
@property (nonatomic,retain) FPUIAction * uiAction;                            //@synthesize uiAction=_uiAction - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * supportedContentTypes;                    //@synthesize supportedContentTypes=_supportedContentTypes - In the implementation block
@property (assign,nonatomic) BOOL supportsMultipleItems;                       //@synthesize supportsMultipleItems=_supportsMultipleItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supportsMultipleItems;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(NSArray *)supportedContentTypes;
-(id)resolvedHandler;
-(NSString *)uiActionProviderIdentifier;
-(void)setSupportedContentTypes:(NSArray *)arg1 ;
-(void)setSupportsMultipleItems:(BOOL)arg1 ;
-(void)setNavigationSide:(long long)arg1 ;
-(void)setMenuSortOrder:(unsigned long long)arg1 ;
-(void)setRequiresResolvedItems:(BOOL)arg1 ;
-(void)setRequiresVersioning:(BOOL)arg1 ;
-(void)setFilteringPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filteringPredicate;
-(long long)navigationSide;
-(unsigned long long)menuSortOrder;
-(BOOL)requiresResolvedItems;
-(BOOL)requiresVersioning;
-(id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 resolvedHandler:(/*^block*/id)arg3 ;
-(id)unresolvedHandler;
-(void)setUnresolvedHandler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 availability:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithUIAction:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 unresolvedHandler:(/*^block*/id)arg3 ;
-(void)setResolvedHandler:(id)arg1 ;
-(void)setUiActionProviderIdentifier:(NSString *)arg1 ;
-(FPUIAction *)uiAction;
-(void)setUiAction:(FPUIAction *)arg1 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)commonInit;
@end

