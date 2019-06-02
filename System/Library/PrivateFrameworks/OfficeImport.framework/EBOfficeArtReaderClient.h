/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABReaderClient.h>

@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2 ;
+(BOOL)tablesAreAllowed;
+(id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(BOOL)escherIsFullySupported;
+(void)readEshClientAnchor:(const XlEshClientAnchor*)arg1 targetClientData:(id)arg2 state:(id)arg3 ;
+(void)setAutoInsetForShape:(EshShape*)arg1 ;
@end
