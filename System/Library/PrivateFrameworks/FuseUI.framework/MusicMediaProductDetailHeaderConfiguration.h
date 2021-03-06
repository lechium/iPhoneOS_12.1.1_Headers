/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPArtworkCatalog, NSString;

@interface MusicMediaProductDetailHeaderConfiguration : NSObject {

	BOOL _shouldIncludeHeader;
	BOOL _shouldUseSplitMainForContentView;
	MPArtworkCatalog* _headerArtworkCatalog;
	unsigned long long _headerStyle;
	NSString* _lockupArtworkProperty;

}

@property (nonatomic,retain) MPArtworkCatalog * headerArtworkCatalog;              //@synthesize headerArtworkCatalog=_headerArtworkCatalog - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                       //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                       //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeHeader;                             //@synthesize shouldIncludeHeader=_shouldIncludeHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSplitMainForContentView;                //@synthesize shouldUseSplitMainForContentView=_shouldUseSplitMainForContentView - In the implementation block
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(unsigned long long)headerStyle;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(NSString *)lockupArtworkProperty;
-(void)setHeaderArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(BOOL)shouldIncludeHeader;
-(BOOL)shouldUseSplitMainForContentView;
-(MPArtworkCatalog *)headerArtworkCatalog;
-(void)setShouldIncludeHeader:(BOOL)arg1 ;
-(void)setShouldUseSplitMainForContentView:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

