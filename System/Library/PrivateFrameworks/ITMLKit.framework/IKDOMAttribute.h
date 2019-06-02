/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMAttribute.h>

@class NSString, IKDOMNode;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) IKDOMNode * ownerElement; 
-(id)nodeValue;
-(IKDOMNode *)ownerElement;
-(BOOL)dispatchEvent:(id)arg1 ;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
-(id)appendChild:(id)arg1 ;
-(id)cloneNode:(BOOL)arg1 ;
-(BOOL)hasChildNodes;
-(id)textContent;
-(id)nodeName;
-(NSString *)name;
-(NSString *)value;
-(id)removeChild:(id)arg1 ;
-(id)childNodes;
-(id)lastChild;
-(id)firstChild;
-(long long)nodeType;
-(id)nextSibling;
-(id)previousSibling;
@end

