/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXFontIndex;
@class SXDocument, SXImageController, NSMutableDictionary, SXMetaData, UIColor;

@interface SXDocumentController : NSObject {

	SXDocument* _document;
	id<SXFontIndex> _fontIndex;
	SXImageController* _imageController;
	NSMutableDictionary* _componentTextStyles;
	NSMutableDictionary* _componentStyles;

}

@property (nonatomic,retain) SXImageController * imageController;                    //@synthesize imageController=_imageController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentTextStyles;              //@synthesize componentTextStyles=_componentTextStyles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentStyles;                  //@synthesize componentStyles=_componentStyles - In the implementation block
@property (nonatomic,readonly) SXDocument * document;                                //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) SXMetaData * metaData; 
@property (nonatomic,readonly) UIColor * documentBackgroundColor; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) id<SXFontIndex> fontIndex;                            //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,readonly) id<SXAutoPlacement> autoplacement; 
-(SXMetaData *)metaData;
-(UIColor *)topBackgroundColor;
-(id)imageResourceForIdentifier:(id)arg1 ;
-(id)componentIdentifierUsingThumbnail;
-(id)componentStyleForIdentifier:(id)arg1 andClassification:(id)arg2 ;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 ;
-(id)resourceForIdentifier:(id)arg1 ;
-(id)dataTableStyleForIdentifier:(id)arg1 andClassification:(id)arg2 ;
-(id)componentLayoutForIdentifier:(id)arg1 ;
-(id)componentStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 ;
-(id<SXAutoPlacement>)autoplacement;
-(NSMutableDictionary *)componentStyles;
-(id)mergedObjectsWithIdentifier:(id)arg1 andDefaultIdentifiers:(id)arg2 fromDictionary:(id)arg3 ;
-(NSMutableDictionary *)componentTextStyles;
-(id)mergeJSONObjects:(id)arg1 ;
-(SXImageController *)imageController;
-(id)allImageResources;
-(id)filterImageResources;
-(id)componentIdentifierUsingThumbnailInComponents:(id)arg1 ;
-(id)dataTableStyleForIdentifier:(id)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 andClassification:(id)arg2 ;
-(id)requiredResourceURLs;
-(UIColor *)documentBackgroundColor;
-(void)setImageController:(SXImageController *)arg1 ;
-(void)setComponentTextStyles:(NSMutableDictionary *)arg1 ;
-(void)setComponentStyles:(NSMutableDictionary *)arg1 ;
-(id<SXFontIndex>)fontIndex;
-(id)initWithDocument:(id)arg1 ;
-(SXDocument *)document;
@end

