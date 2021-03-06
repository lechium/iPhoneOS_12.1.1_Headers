/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(id)fontForScript:(id)arg1 ;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(id)scripts;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
@end

