/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/INUIInterfaceSection.h>
#import <libobjc.A.dylib/INUICKPInterfaceSectionModeling.h>

@protocol CRCardSection;
@class NSSet, NSString;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling> {

	NSSet* _cardSectionParameters;
	id<CRCardSection> _cardSection;

}

@property (nonatomic,retain) id<CRCardSection> cardSection;                         //@synthesize cardSection=_cardSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long interactiveBehavior; 
@property (nonatomic,copy) NSSet * parameters;                                      //@synthesize cardSectionParameters=_cardSectionParameters - In the implementation block
@property (nonatomic,readonly) BOOL isWildCardSection; 
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2 ;
-(BOOL)isWildCardSection;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSSet *)parameters;
-(void)setParameters:(NSSet *)arg1 ;
@end

