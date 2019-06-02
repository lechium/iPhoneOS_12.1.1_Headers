/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAXClient.h>

@protocol OAXClient
@optional
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;

@required
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)arg1;
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3;
-(void)readClientDataFromGroupNode:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3;
-(id)readClientTextField:(xmlNode*)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3;

@end


@interface OAXClient : NSObject <OAXClient>
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)arg1 ;
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3 ;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3 ;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4 ;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2 ;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromGroupNode:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
-(id)readClientTextField:(xmlNode*)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4 ;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
@end

