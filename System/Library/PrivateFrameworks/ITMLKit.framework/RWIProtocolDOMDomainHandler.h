/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolDOMDomainHandler <NSObject>
@required
-(void)getDocumentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)requestChildNodesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 depth:(int*)arg4;
-(void)querySelectorWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 selector:(id)arg4;
-(void)querySelectorAllWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 selector:(id)arg4;
-(void)setNodeNameWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 name:(id)arg4;
-(void)setNodeValueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 value:(id)arg4;
-(void)removeNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)setAttributeValueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5;
-(void)setAttributesAsTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id*)arg5;
-(void)removeAttributeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 name:(id)arg4;
-(void)getEventListenersForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4;
-(void)setEventListenerDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 eventListenerId:(int)arg3 disabled:(BOOL)arg4;
-(void)getAccessibilityPropertiesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)getOuterHTMLWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)setOuterHTMLWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 outerHTML:(id)arg4;
-(void)insertAdjacentHTMLWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 position:(id)arg4 html:(id)arg5;
-(void)performSearchWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 query:(id)arg3 nodeIds:(id*)arg4;
-(void)getSearchResultsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
-(void)discardSearchResultsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 searchId:(id)arg3;
-(void)requestNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 objectId:(id)arg3;
-(void)setInspectModeEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3 highlightConfig:(id*)arg4;
-(void)highlightRectWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id*)arg7 outlineColor:(id*)arg8 usePageCoordinates:(BOOL*)arg9;
-(void)highlightQuadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 quad:(id)arg3 color:(id*)arg4 outlineColor:(id*)arg5 usePageCoordinates:(BOOL*)arg6;
-(void)highlightSelectorWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 highlightConfig:(id)arg3 selectorString:(id)arg4 frameId:(id*)arg5;
-(void)highlightNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 highlightConfig:(id)arg3 nodeId:(int*)arg4 objectId:(id*)arg5;
-(void)highlightNodeListWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeIds:(id)arg3 highlightConfig:(id)arg4;
-(void)hideHighlightWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)highlightFrameWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 contentColor:(id*)arg4 contentOutlineColor:(id*)arg5;
-(void)pushNodeByPathToFrontendWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 path:(id)arg3;
-(void)pushNodeByBackendIdToFrontendWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 backendNodeId:(int)arg3;
-(void)releaseBackendNodeIdsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeGroup:(id)arg3;
-(void)resolveNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4;
-(void)getAttributesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)moveToWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int*)arg5;
-(void)undoWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)redoWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)markUndoableStateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)focusWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)setInspectedNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;

@end

