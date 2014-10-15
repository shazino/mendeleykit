/*
 ******************************************************************************
 * Copyright (C) 2014-2017 Elsevier/Mendeley.
 *
 * This file is part of the Mendeley iOS SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *****************************************************************************
 */

#ifndef MendeleyKit_MendeleyError_h
#define MendeleyKit_MendeleyError_h

/***********************************************
   @name Mendeley Error Codes And Descriptions
   // TODO: change
***********************************************/
/**
   Error codes
   - 100 region JSON
   - 200 region Model
   - 300 region unexpected data types
   - 1000 region authentication and networking
   - 1900s General
 */
typedef NS_ENUM (int, MendeleyErrorCode)
{
    kMendeleyJSONTypeUnrecognisedErrorCode = 100,
    kMendeleyJSONTypeNotMappedToModelErrorCode,
    kMendeleyJSONTypeObjectNilErrorCode,

    kMendeleyUnrecognisedModelErrorCode = 200,
    kMendeleyModelOrPropertyNilErrorCode,

    kMendeleyUnexpectedMimeTypeErrorCode = 300,
    kMendeleyUnknownDataTypeErrorCode,
    kMendeleyPagingNotProvidedForThisType,

    kMendeleyUnauthorizedErrorCode = 1000,
    kMendeleyInvalidAccessTokenErrorCode,
    kMendeleyCancelledRequestErrorCode,
    kMendeleyNetworkUnreachable,
    kMendeleyFileNotAvailableForTransfer,
    kMendeleyConnectionCannotBeStarted,
    kMendeleyConnectionFinishedWithError,

    kMendeleyResponseTypeUnknownErrorCode = 1984,
    kMendeleyPathNotFoundErrorCode,
};

#define kMendeleyErrorNetworkBaseCode 1000

/**
   error domain
 */
#define kMendeleyErrorDomain          @"com.MendeleyKit.error"

#endif /* ifndef MendeleyKit_MendeleyError_h */
