/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSetting.h>

@class NUSetting;

@interface NUArraySetting : NUSetting {

	NUSetting* _content;

}

@property (readonly) NUSetting * content;              //@synthesize content=_content - In the implementation block
+(id)supportedAttributes;
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)copyArray:(id)arg1 ;
-(id)initWithContent:(id)arg1 attributes:(id)arg2 ;
-(BOOL)isValid:(out id*)arg1 ;
-(id)init;
-(id)description;
-(id)initWithAttributes:(id)arg1 ;
-(id)copy:(id)arg1 ;
-(NUSetting *)content;
@end

