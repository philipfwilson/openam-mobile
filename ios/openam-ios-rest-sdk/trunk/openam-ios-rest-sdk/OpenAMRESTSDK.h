/*
 * The contents of this file are subject to the terms of the Common Development and
 * Distribution License (the License). You may not use this file except in compliance with the
 * License.
 *
 * You can obtain a copy of the License at legal/CDDLv1.0.txt. See the License for the
 * specific language governing permission and limitations under the License.
 *
 * When distributing Covered Software, include this CDDL Header Notice in each file and include
 * the License file at legal/CDDLv1.0.txt. If applicable, add the following below the CDDL
 * Header, with the fields enclosed by brackets [] replaced by your own identifying
 * information: "Portions copyright [year] [name of copyright owner]".
 *
 * Copyright 2013 ForgeRock, AS.
 */

#import <Foundation/Foundation.h>
#import "RestService.h"
#import "LegacyRestService.h"
#import "RestConnection.h"
#import "RootLoginViewController.h"
#import "AuthenticationProcess.h"
#import "AuthenticationSuccessResponse.h"
#import "AuthenticationFailureResponse.h"
#import "AuthenticationCallbackResponse.h"
#import "AuthenticationCallback.h"
#import "AuthenticationCallbackField.h"
#import "DataStoreLogin.h"
#import "HttpHelper.h"
#import "OAuth2.h"
#import "OAuth2Delegate.h"

@interface OpenAMRESTSDK : NSObject <NSURLConnectionDelegate>

extern NSString * const OPENAM_BASE_URL;

- (AuthenticationProcess *)authenticate;

- (BOOL)isTokenValid:(NSString *)ssoTokenId forServerInstance:(NSString *)openAMBaseUrl;

@end
